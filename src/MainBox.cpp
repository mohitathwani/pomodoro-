#include "MainBox.h"

MainBox::MainBox(): Gtk::Box(Gtk::ORIENTATION_VERTICAL, 5) {
    pack_start(m_clock_view, true, true, 0);
}

MainBox::~MainBox() {

}