import QtQuick 2.6
import QtQuick.Controls 1.5




ApplicationWindow {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")
    property variant stoplichten : [ stoplichtSABU, stoplichtSABI, stoplichtSOBI, stoplichtSOBU  ];

    function updateGUI()
    {
        for(x = 0 ; x < stoplichten.length ; x++){
            if(guipaneel.updateStoplicht(x)){
                stoplichten[x].color = "red"
            }else{
                stoplichten[x].color = "green"
            }
        }
    }
    TextField{
        id:invoerStoplichtNr
        x:845
        y: 26
        width: 70
        placeholderText: qsTr("StoplichtNr")
    }
    Button{
        text: "maak Alles Rood"
        height: 18
        x:932
        y: 2
        onClicked:{
            guipaneel.maakStoplichtRood();
            updateGUI();
        }
    }
    Button{
        text: "maakGroen"
        x:845
        y: 2
        height: 18
        onClicked:{
            guipaneel.maakStoplichtGroen( invoerStoplichtNr.text * 1);
            updateGUI();
        }
    }
    Rectangle{
        x:20
        y:50
        id: stoplichtSABU
        width: 50
        height: 50
        color: "red"
    }
    Rectangle{
        x:320
        y:50
        id: stoplichtSABI
        width: 50
        height: 50
        color: "red"
    }
    Rectangle{
        x:620
        y:50
        id: stoplichtSOBI
        width: 50
        height: 50
        color: "red"
    }
    Rectangle{
        x:920
        y:50
        id: stoplichtSOBU
        width: 50
        height: 50
        color: "red"
    }
    Rectangle{
        x:0
        y:700
        id:waterbasis
        color:"blue"
        width:1024
        height: 68
    }
    Rectangle{
        x:800
        y:200
        id:waterSO
        color:"blue"
        width: 224
        height: 568
    }
    Rectangle{
        x :150
        y :150
        id:sluisDeurSA
        width:50
        height: 618
        color:"brown"
    }
    Rectangle{
        x :750
        y :150
        id:sluisDeurSO
        width:50
        height: 618
        color:"brown"
    }
    Rectangle{
        x :755
        y :700
        id:sluisKlepSOLaag
        width: 40
        height: 40
        color:"black"
    }
    Rectangle{
        x :755
        y :500
        id:sluisKlepSOMidden
        width: 40
        height: 40
        color:"black"
    }
    Rectangle{
        x :755
        y :300
        id:sluisKlepSOHoog
        width: 40
        height: 40
        color:"black"
    }
    Rectangle{
        x :155
        y :700
        id:sluisKlepSA
        width: 40
        height: 40
        color:"black"
    }

    Button {
        x: 738
        y: 50
        height: 18
        text: "OpenSluisDuer"
    }

    Button {
        x: 740
        y: 114
        height: 18
        text: "OpenKlep"
    }

    TextField {
        id: invoer1
        x: 745
        y: 80
        width: 70
        text: "KlepNr"
        placeholderText: qsTr("StoplichtNr")
    }

    Button {
        x: 138
        y: 50
        height: 18
        text: "OpenSluisDuer"
    }

    Button {
        x: 141
        y: 114
        height: 18
        text: "OpenKlep"
    }

}
