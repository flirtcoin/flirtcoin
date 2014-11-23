#!/bin/bash
# Copyright (c) 2013-2014 The Flirtcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

BUILDDIR="/home/glenn/Projects/flirtcoin"
EXEEXT=""

# These will turn into comments if they were disabled when configuring.
ENABLE_WALLET=1
ENABLE_UTILS=1
ENABLE_FLIRTCOIND=1

REAL_FLIRTCOIND="$BUILDDIR/src/flirtcoind${EXEEXT}"
REAL_FLIRTCOINCLI="$BUILDDIR/src/flirtcoin-cli${EXEEXT}"

