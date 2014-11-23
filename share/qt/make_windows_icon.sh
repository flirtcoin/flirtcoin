#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/flirtcoin.png
ICON_DST=../../src/qt/res/icons/flirtcoin.ico
convert ${ICON_SRC} -resize 16x16 flirtcoin-16.png
convert ${ICON_SRC} -resize 32x32 flirtcoin-32.png
convert ${ICON_SRC} -resize 48x48 flirtcoin-48.png
convert flirtcoin-16.png flirtcoin-32.png flirtcoin-48.png ${ICON_DST}

