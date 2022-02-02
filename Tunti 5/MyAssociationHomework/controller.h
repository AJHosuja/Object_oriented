#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "button.h"
#include "view.h"

class Controller
{
public:
    Controller(View *parameterView, Button *parameterButton);
    void listenMessages();

private:
    View *objectView;
    Button *objectButton;
};

#endif // CONTROLLER_H
