import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Text {
        id: batt
        text: "exit"
        anchors.centerIn: parent

        MouseArea {
            anchors.fill: batt
            onClicked: {
                ingh.funcHut()
                //Qt.quit();
            }
        }
    }
}
