@echo off
setlocal enabledelayedexpansion

REM === Run MOC for headers using Q_OBJECT ===
echo Running MOC...
moc Connector_Classes\LoginWindow.h -o MOC_Classes\moc_LoginWindow.cpp

REM === Collect all .cpp files from subfolders ===
set FILES=
for %%f in (main.cpp) do set FILES=!FILES! %%f
for %%f in (Connector_Classes\*.cpp) do set FILES=!FILES! %%f
for %%f in (Logic_classes\*.cpp) do set FILES=!FILES! %%f
for %%f in (MOC_Classes\*.cpp) do set FILES=!FILES! %%f

REM === Compile with g++ ===
echo Compiling...
g++ !FILES! -IUIClasses -ILogic_classes -IConnector_Classes -lQt5Widgets -lQt5Gui -lQt5Core -o app.exe

IF %ERRORLEVEL% EQU 0 (
    echo.
    echo ✅ Build successful! Run: app.exe
) ELSE (
    echo.
    echo ❌ Build failed.
)

pause
