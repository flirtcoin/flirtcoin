

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *flirtcoin_strings[] = {
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=flirtcoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Flirtcoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Cannot obtain a lock on data directory %s. Flirtcoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Distributed under the MIT/X11 software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Fees (in FLIRT/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Fees (in FLIRT/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"If paytxfee is not set, include enough fee so transactions are confirmed on "
"average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Set the processor limit for when generation is on (-1 = unlimited, default: "
"%d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Unable to bind to %s on this computer. Flirtcoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Flirtcoin Core will not work properly."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("flirtcoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("flirtcoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "(default: 1)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Copyright (C) 2009-%i The Flirtcoin Core Developers"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error loading wallet.dat: Wallet requires newer version of Flirtcoin Core"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Fee (in FLIRT/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Information"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Initialization sanity check failed. Flirtcoin Core is shutting down."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Keep at most <n> unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Print block on startup, if found in block index"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Print block tree on startup (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "RPC SSL options: (see the Flirtcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "This help message"),
QT_TRANSLATE_NOOP("flirtcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("flirtcoin-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Wallet needed to be rewritten: restart Flirtcoin Core to complete"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Warning"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("flirtcoin-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("flirtcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("flirtcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("flirtcoin-core", "on startup"),
QT_TRANSLATE_NOOP("flirtcoin-core", "wallet.dat corrupt, salvage failed"),
};
