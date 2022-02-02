#include "controller.h"

Controller::Controller (View *parameterView, Button *parameterButton)
{
    objectView = parameterView;
    objectButton = parameterButton;
    this->listenMessages();
}

void Controller::listenMessages()
{
    char keyPressed='0';


    while (keyPressed!='q')
        {
            // if (kbhit()) ehtolause toteutuu, jos näppäinta painetaan
        if (kbhit()){

        //alla koodi, jossa oliot hoitavat merkin lukemisen ja tulostamisen, muodostetun 1:1 yhteyden
        // avulla. Eli oliot tekevät yhteistyötä. Jokaisella oliolla/luokalla oma tehtävä.
        keyPressed=objectButton->readKeyboard();


        objectView->printCharacter(keyPressed);
}
}
}
