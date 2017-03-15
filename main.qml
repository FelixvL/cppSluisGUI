import QtQuick 2.6
import QtQuick.Controls 1.5



ApplicationWindow {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")


    Button{
        text: "Refresh"
        height: 18
        x:200
        onClicked:{
            if(guipaneel.updateStoplicht()){
                water.color = "red"
            }else{
                water.color = "green"
            }
        }
    }
    Button{
        text: "maakRood"
        height: 18
        x:400
        onClicked:{
            guipaneel.maakStoplichtRood();
        }
    }
    Button{
        text: "maakGroen"
        height: 18
        onClicked:{
            guipaneel.maakStoplichtGroen();
        }
    }
    Rectangle{
        x: 200
        y:200
        id: water
        width: 300
        height: 200
        color: "red"
    }



}
