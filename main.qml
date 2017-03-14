import QtQuick 2.6
import QtQuick.Controls 1.5



ApplicationWindow {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")


    Button{
        text: "click maar"
        height: 18
        onClicked:{
            game.test();
            this.text = game.nuString();
            water.height = 300
            if(game.doen()){
                this.text = "wel";
            }else{
                this.text = "niet"
            }

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
