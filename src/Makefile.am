AM_LDFLAGS = $(PTHREAD_CFLAGS) $(LIBTOOL_LDFLAGS)

if USE_LIBSECP256K1
secp256k1/libsecp256k1.la: $(wildcard secp256k1/src/*) $(wildcard secp256k1/include/*)
	@$(MAKE) $(AM_MAKEFLAGS) -C $(@D) $(@F)
endif

if EMBEDDED_LEVELDB
LEVELDB_CPPFLAGS += -I$(srcdir)/leveldb/include
LEVELDB_CPPFLAGS += -I$(srcdir)/leveldb/helpers/memenv
LIBLEVELDB += $(builddir)/leveldb/libleveldb.a
LIBMEMENV  += $(builddir)/leveldb/libmemenv.a

# NOTE: This dependency is not strictly necessary, but without it make may try to build both in parallel, which breaks the LevelDB build system in a race
$(LIBLEVELDB): $(LIBMEMENV)

$(LIBLEVELDB) $(LIBMEMENV):
	@echo "Building LevelDB ..." && $(MAKE) -C $(@D) $(@F) CXX="$(CXX)" \
	  CC="$(CC)" PLATFORM=$(TARGET_OS) AR="$(AR)" $(LEVELDB_TARGET_FLAGS) \
          OPT="$(CXXFLAGS) $(CPPFLAGS)"
endif

FLIRTCOIN_CONFIG_INCLUDES=-I$(builddir)/config
FLIRTCOIN_INCLUDES=-I$(builddir) -I$(builddir)/obj $(BOOST_CPPFLAGS) $(LEVELDB_CPPFLAGS) $(CRYPTO_CFLAGS) $(SSL_CFLAGS)

if USE_LIBSECP256K1
FLIRTCOIN_INCLUDES += -I$(srcdir)/secp256k1/include
endif

LIBFLIRTCOIN_SERVER=libflirtcoin_server.a
LIBFLIRTCOIN_WALLET=libflirtcoin_wallet.a
LIBFLIRTCOIN_COMMON=libflirtcoin_common.a
LIBFLIRTCOIN_CLI=libflirtcoin_cli.a
LIBFLIRTCOIN_UTIL=libflirtcoin_util.a
LIBFLIRTCOIN_CRYPTO=crypto/libflirtcoin_crypto.a
LIBFLIRTCOIN_UNIVALUE=univalue/libflirtcoin_univalue.a
LIBFLIRTCOINQT=qt/libflirtcoinqt.a

# Make is not made aware of per-object dependencies to avoid limiting building parallelization
# But to build the less dependent modules first, we manually select their order here:
noinst_LIBRARIES = \
  crypto/libflirtcoin_crypto.a \
  libflirtcoin_util.a \
  libflirtcoin_common.a \
  univalue/libflirtcoin_univalue.a \
  libflirtcoin_server.a \
  libflirtcoin_cli.a
if ENABLE_WALLET
FLIRTCOIN_INCLUDES += $(BDB_CPPFLAGS)
noinst_LIBRARIES += libflirtcoin_wallet.a
endif

bin_PROGRAMS =
TESTS =

if BUILD_FLIRTCOIND
  bin_PROGRAMS += flirtcoind
endif

if BUILD_FLIRTCOIN_UTILS
  bin_PROGRAMS += flirtcoin-cli flirtcoin-tx
endif

.PHONY: FORCE
# flirtcoin core #
FLIRTCOIN_CORE_H = \
  addrman.h \
  alert.h \
  allocators.h \
  amount.h \
  base58.h \
  bloom.h \
  chain.h \
  chainparams.h \
  chainparamsbase.h \
  chainparamsseeds.h \
  checkpoints.h \
  checkqueue.h \
  clientversion.h \
  coincontrol.h \
  coins.h \
  compat.h \
  compressor.h \
  core/block.h \
  core/transaction.h \
  core_io.h \
  crypter.h \
  db.h \
  eccryptoverify.h \
  ecwrapper.h \
  hash.h \
  init.h \
  key.h \
  keystore.h \
  leveldbwrapper.h \
  limitedmap.h \
  main.h \
  miner.h \
  mruset.h \
  netbase.h \
  net.h \
  noui.h \
  pow.h \
  protocol.h \
  pubkey.h \
  random.h \
  rpcclient.h \
  rpcprotocol.h \
  rpcserver.h \
  script/interpreter.h \
  script/script.h \
  script/sigcache.h \
  script/sign.h \
  script/standard.h \
  serialize.h \
  streams.h \
  sync.h \
  threadsafety.h \
  timedata.h \
  tinyformat.h \
  txdb.h \
  txmempool.h \
  ui_interface.h \
  uint256.h \
  undo.h \
  util.h \
  utilstrencodings.h \
  utilmoneystr.h \
  utiltime.h \
  version.h \
  wallet.h \
  wallet_ismine.h \
  walletdb.h \
  compat/sanity.h

JSON_H = \
  json/json_spirit.h \
  json/json_spirit_error_position.h \
  json/json_spirit_reader.h \
  json/json_spirit_reader_template.h \
  json/json_spirit_stream_reader.h \
  json/json_spirit_utils.h \
  json/json_spirit_value.h \
  json/json_spirit_writer.h \
  json/json_spirit_writer_template.h

obj/build.h: FORCE
	@$(MKDIR_P) $(builddir)/obj
	@$(top_srcdir)/share/genbuild.sh $(abs_top_builddir)/src/obj/build.h \
	  $(abs_top_srcdir)
libflirtcoin_util_a-clientversion.$(OBJEXT): obj/build.h

# server: shared between flirtcoind and flirtcoin-qt
libflirtcoin_server_a_CPPFLAGS = $(FLIRTCOIN_INCLUDES) $(MINIUPNPC_CPPFLAGS)
libflirtcoin_server_a_SOURCES = \
  addrman.cpp \
  alert.cpp \
  bloom.cpp \
  chain.cpp \
  checkpoints.cpp \
  init.cpp \
  leveldbwrapper.cpp \
  main.cpp \
  miner.cpp \
  net.cpp \
  noui.cpp \
  pow.cpp \
  rpcblockchain.cpp \
  rpcmining.cpp \
  rpcmisc.cpp \
  rpcnet.cpp \
  rpcrawtransaction.cpp \
  rpcserver.cpp \
  script/sigcache.cpp \
  timedata.cpp \
  txdb.cpp \
  txmempool.cpp \
  $(JSON_H) \
  $(FLIRTCOIN_CORE_H)

# wallet: shared between flirtcoind and flirtcoin-qt, but only linked
# when wallet enabled
libflirtcoin_wallet_a_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
libflirtcoin_wallet_a_SOURCES = \
  db.cpp \
  crypter.cpp \
  rpcdump.cpp \
  rpcwallet.cpp \
  wallet.cpp \
  wallet_ismine.cpp \
  walletdb.cpp \
  $(FLIRTCOIN_CORE_H)

# crypto primitives library
crypto_libflirtcoin_crypto_a_CPPFLAGS = $(FLIRTCOIN_CONFIG_INCLUDES)
crypto_libflirtcoin_crypto_a_SOURCES = \
  crypto/sha1.cpp \
  crypto/sha2.cpp \
  crypto/ripemd160.cpp \
  crypto/common.h \
  crypto/sha2.h \
  crypto/sha1.h \
  crypto/ripemd160.h

# univalue JSON library
univalue_libflirtcoin_univalue_a_SOURCES = \
  univalue/univalue.cpp \
  univalue/univalue_read.cpp \
  univalue/univalue_write.cpp \
  univalue/univalue_escapes.h \
  univalue/univalue.h

# common: shared between flirtcoind, and flirtcoin-qt and non-server tools
libflirtcoin_common_a_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
libflirtcoin_common_a_SOURCES = \
  allocators.cpp \
  amount.cpp \
  base58.cpp \
  chainparams.cpp \
  coins.cpp \
  compressor.cpp \
  core/block.cpp \
  core/transaction.cpp \
  core_read.cpp \
  core_write.cpp \
  eccryptoverify.cpp \
  ecwrapper.cpp \
  hash.cpp \
  key.cpp \
  keystore.cpp \
  netbase.cpp \
  protocol.cpp \
  pubkey.cpp \
  script/interpreter.cpp \
  script/script.cpp \
  script/sign.cpp \
  script/standard.cpp \
  $(FLIRTCOIN_CORE_H)

# util: shared between all executables.
# This library *must* be included to make sure that the glibc
# backward-compatibility objects and their sanity checks are linked.
libflirtcoin_util_a_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
libflirtcoin_util_a_SOURCES = \
  compat/glibc_sanity.cpp \
  compat/glibcxx_sanity.cpp \
  chainparamsbase.cpp \
  clientversion.cpp \
  random.cpp \
  rpcprotocol.cpp \
  sync.cpp \
  uint256.cpp \
  util.cpp \
  utilstrencodings.cpp \
  utilmoneystr.cpp \
  utiltime.cpp \
  $(FLIRTCOIN_CORE_H)

if GLIBC_BACK_COMPAT
libflirtcoin_util_a_SOURCES += compat/glibc_compat.cpp
libflirtcoin_util_a_SOURCES += compat/glibcxx_compat.cpp
endif

# cli: shared between flirtcoin-cli and flirtcoin-qt
libflirtcoin_cli_a_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
libflirtcoin_cli_a_SOURCES = \
  rpcclient.cpp \
  $(FLIRTCOIN_CORE_H)

nodist_libflirtcoin_util_a_SOURCES = $(srcdir)/obj/build.h
#

# flirtcoind binary #
flirtcoind_LDADD = \
  $(LIBFLIRTCOIN_SERVER) \
  $(LIBFLIRTCOIN_COMMON) \
  $(LIBFLIRTCOIN_UNIVALUE) \
  $(LIBFLIRTCOIN_UTIL) \
  $(LIBFLIRTCOIN_CRYPTO) \
  $(LIBLEVELDB) \
  $(LIBMEMENV)

if USE_LIBSECP256K1
  flirtcoind_LDADD += secp256k1/libsecp256k1.la
endif

if ENABLE_WALLET
flirtcoind_LDADD += libflirtcoin_wallet.a
endif
flirtcoind_SOURCES = flirtcoind.cpp
#

if TARGET_WINDOWS
flirtcoind_SOURCES += flirtcoind-res.rc
endif

flirtcoind_LDADD += $(BOOST_LIBS) $(BDB_LIBS) $(SSL_LIBS) $(CRYPTO_LIBS) $(MINIUPNPC_LIBS)
flirtcoind_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
flirtcoind_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS)

# flirtcoin-cli binary #
flirtcoin_cli_LDADD = \
  $(LIBFLIRTCOIN_CLI) \
  $(LIBFLIRTCOIN_UTIL) \
  $(BOOST_LIBS) \
  $(SSL_LIBS) \
  $(CRYPTO_LIBS)

flirtcoin_cli_SOURCES = \
  flirtcoin-cli.cpp

if USE_LIBSECP256K1
  flirtcoin_cli_LDADD += secp256k1/libsecp256k1.la
endif
flirtcoin_cli_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
#

# flirtcoin-tx binary #
flirtcoin_tx_LDADD = \
  $(LIBFLIRTCOIN_UNIVALUE) \
  $(LIBFLIRTCOIN_COMMON) \
  $(LIBFLIRTCOIN_UTIL) \
  $(LIBFLIRTCOIN_CRYPTO)

if USE_LIBSECP256K1
  flirtcoin_tx_LDADD += secp256k1/libsecp256k1.la
endif

  flirtcoin_tx_LDADD += $(BOOST_LIBS) \
  $(CRYPTO_LIBS)

flirtcoin_tx_SOURCES = flirtcoin-tx.cpp
flirtcoin_tx_CPPFLAGS = $(FLIRTCOIN_INCLUDES)
#
flirtcoin_tx_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS)

if TARGET_WINDOWS
flirtcoin_cli_SOURCES += flirtcoin-cli-res.rc
endif
flirtcoin_cli_LDFLAGS = $(RELDFLAGS) $(AM_LDFLAGS)

CLEANFILES = leveldb/libleveldb.a leveldb/libmemenv.a *.gcda *.gcno

DISTCLEANFILES = obj/build.h

EXTRA_DIST = leveldb secp256k1

clean-local:
	-$(MAKE) -C leveldb clean
	-$(MAKE) -C secp256k1 clean 2>/dev/null
	rm -f leveldb/*/*.gcno leveldb/helpers/memenv/*.gcno
	-rm -f config.h

.rc.o:
	@test -f $(WINDRES)
	$(AM_V_GEN) $(WINDRES) -DWINDRES_PREPROC -i $< -o $@

.mm.o:
	$(AM_V_CXX) $(OBJCXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	  $(CPPFLAGS) $(AM_CXXFLAGS) $(QT_INCLUDES) $(CXXFLAGS)  -c -o $@ $<

%.pb.cc %.pb.h: %.proto
	@test -f $(PROTOC)
	$(AM_V_GEN) $(PROTOC) --cpp_out=$(@D) --proto_path=$(abspath $(<D) $<)

if ENABLE_TESTS
include Makefile.test.include
endif

if ENABLE_QT
include Makefile.qt.include
endif

if ENABLE_QT_TESTS
include Makefile.qttest.include
endif
