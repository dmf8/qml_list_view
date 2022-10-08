import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListView {
        width: 300
        height: 480

        model: model1
        delegate: Item {
            width: 400
            height: 200

            RowLayout {
                anchors.fill: parent
                spacing: 0

                Item {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    Layout.preferredWidth: 1

                    Text {
                        text: role11
                    }
                }

//                Item {
//                    Layout.fillHeight: true
//                    Layout.fillWidth: true
//                    Layout.preferredWidth: 1

//                    Text {
//                        text: role12
//                    }
//                }

                Item {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    Layout.preferredWidth: 1

                    Rectangle {
                        anchors.fill: parent
                        border.width: 5
                        anchors.margins: 5

                        ListView {
                            anchors.fill: parent
                            model: roleModel
                            delegate: Item {
                                width: parent.width
                                height: 10
                                Text {
                                    text: role22
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
