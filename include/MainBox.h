#ifndef MAIN_BOX_H
#define MAIN_BOX_H

#include <gtkmm/box.h>
#include "ClockView.h"

class MainBox : public Gtk::Box
{
public:
    MainBox();
    ~MainBox();

private:
    ClockView m_clock_view;
};
#endif