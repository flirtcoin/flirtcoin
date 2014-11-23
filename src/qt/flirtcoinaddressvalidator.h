// Copyright (c) 2011-2014 The Flirtcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FLIRTCOIN_QT_FLIRTCOINADDRESSVALIDATOR_H
#define FLIRTCOIN_QT_FLIRTCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FlirtcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FlirtcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Flirtcoin address widget validator, checks for a valid flirtcoin address.
 */
class FlirtcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FlirtcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // FLIRTCOIN_QT_FLIRTCOINADDRESSVALIDATOR_H
