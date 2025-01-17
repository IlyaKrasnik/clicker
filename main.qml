import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Window 2.12

import Player 1.0

ApplicationWindow {
    width: 480
    height: 640
    visible: true
    title: "Clicker"

    Player {
        id: player
        onBalanceChanged: {
            gamePage.balance = "Balance: " + balance;
        }
        onPerClickChanged:  {
            gamePage.per_click = "Per click: " + per_click;
        }
        onPerSecondChanged: {
            gamePage.per_second = "Per second: " + per_second;
        }
        onTapFactorChanged: {
            gamePage.tap_factor = "Tap factor: x" + tap_factor;
        }
    }

    StackView {
        id: pageStack
        initialItem: gamePage
        anchors.fill: parent
    }

    GamePage {
        id: gamePage
    }

    ShopPage {
        id: shopPage
    }
}
