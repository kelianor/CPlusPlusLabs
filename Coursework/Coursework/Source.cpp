#include <Windows.h>
#include "Functions.h"
#include "Authorization.h"
#include "MainWindow.h"

using namespace Coursework;

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    bool keepRunning = true;
    while (keepRunning)
    {
        Authorization^ loginForm = gcnew Authorization();
        Application::Run(loginForm);

        AccountManager^ acc = loginForm->account;
        keepRunning = acc->getIsAuthenticated();

        if (keepRunning)
        {
            MainWindow^ mainWindow = gcnew MainWindow(acc);
            Application::Run(mainWindow);

            keepRunning = !mainWindow->account->getIsAuthenticated();
        }
    }
    return 0;
}
