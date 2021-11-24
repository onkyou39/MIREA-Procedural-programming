#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 0, 85, NULL);
	LineTo(hDC, 400, 85);
	MoveToEx(hDC, 200, 0, NULL);
	LineTo(hDC, 200, 170);
	for (float x = -20.0f; x <= 20.0f; x += 0.01f)
	{
		MoveToEx(hDC, 10 * x + 200, -30 * sin(x) + 85, NULL);
		LineTo(hDC, 10 * x + 200, -30 * sin(x) + 85);
	}
	ReleaseDC(hWnd, hDC);
	cin.get();
	return 0;
}
