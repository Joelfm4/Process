#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void){

STARTUPINFOW si = { 0 };
PROCESS_INFORMATION pi = { 0 };

    if(!CreateProcessW(
        L"C:/Program Files/Mozilla Firefox/firefox.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &si,
        &pi)){

        printf("(-) failed to create a process, error: %ld", GetLastError());
        return EXIT_SUCCESS;
    }

    printf("(+) process started! pid: %ld", pi.dwProcessId);
    return EXIT_SUCCESS;
}

/*Create a process*/
