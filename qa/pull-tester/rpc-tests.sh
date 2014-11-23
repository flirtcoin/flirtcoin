#!/bin/bash
set -e

CURDIR=$(cd $(dirname "$0"); pwd)
# Get BUILDDIR and REAL_FLIRTCOIND
. "${CURDIR}/tests-config.sh"

export FLIRTCOINCLI=${BUILDDIR}/qa/pull-tester/run-flirtcoin-cli
export FLIRTCOIND=${REAL_FLIRTCOIND}

#Run the tests

if [ "x${ENABLE_FLIRTCOIND}${ENABLE_UTILS}${ENABLE_WALLET}" = "x111" ]; then
  ${BUILDDIR}/qa/rpc-tests/wallet.sh "${BUILDDIR}/src"
  ${BUILDDIR}/qa/rpc-tests/listtransactions.py --srcdir "${BUILDDIR}/src"
  ${BUILDDIR}/qa/rpc-tests/forknotify.py --srcdir "${BUILDDIR}/src"
else
  echo "No rpc tests to run. Wallet, utils, and flirtcoind must all be enabled"
fi
