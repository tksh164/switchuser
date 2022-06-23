#include <iostream>
#include <windows.h>
#include <wtsapi32.h>

int main()
{
    BOOL ret = WTSDisconnectSession(WTS_CURRENT_SERVER_HANDLE, WTS_CURRENT_SESSION, TRUE);
    if (!ret)
    {
        DWORD err = GetLastError();
        std::cout << "WTSDisconnectSession() failed: " << err << "\n";
    }
    else
    {
        std::cout << "The current session disconnected.\n";
    }

    return 0;
}
