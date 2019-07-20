#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/cssprovider.h>

#include "MainBox.h"
#include "ClockView.h"

class MainWindow: public Gtk::Window {
    public:
    MainWindow();
    virtual ~MainWindow();
    MainWindow(MainWindow const&) = delete;
    void operator=(MainWindow const&) = delete;

    private:
    MainBox m_main_box;
    
    Glib::RefPtr<Gtk::CssProvider> m_css_provider;
    Glib::RefPtr<Gdk::Screen> m_screen;
    Glib::RefPtr<Gtk::StyleContext> m_style_context;
};
#endif