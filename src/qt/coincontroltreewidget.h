// Copyright (c) 2011-2013 The Flirtcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FLIRTCOIN_QT_COINCONTROLTREEWIDGET_H
#define FLIRTCOIN_QT_COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);

protected:
    virtual void keyPressEvent(QKeyEvent *event);
};

#endif // FLIRTCOIN_QT_COINCONTROLTREEWIDGET_H
