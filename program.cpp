#include <iostream>
#include "window.hpp"

int main() {
    std::cout << "Creating Window\n";

    Window* pWindow = new Window();

    bool running = true;
    while (running) {
        if (!pWindow->ProcessMessages()) {
            std::cout << "Closing Window\n";
            running = false;
        }

        // Render here
        Sleep(10);
    }
    delete pWindow;
    return 0;
}