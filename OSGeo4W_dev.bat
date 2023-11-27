rem Adapt the path to your OSGeo4W installation.
C:\OSGeo4W\bin\o4w_env_dev.bat


rem Adapt the following line to your MSVC installation directory, followed by
rem the architecture, and the Windows 10 SDK version used.
"D:\Programs\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x86_amd64 10.0.19041.0
set Qt5_DIR=C:\OSGeo4W\apps\Qt5