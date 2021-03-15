import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Window 2.12

Page {
    id: shopPage
    visible: false
    background: Rectangle {
        color: "blue"
    }
    Button {
        id: backToGame
        text: "Back"
        anchors.centerIn: parent
        onClicked: {
            pageStack.pop();
        }
    }
}
