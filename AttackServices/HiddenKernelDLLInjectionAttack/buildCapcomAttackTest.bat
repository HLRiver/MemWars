@ECHO OFF
cl.exe /EHsc AttackTest.cpp ../CapcomDriverAttack/CapcomWrapper.cpp ../CapcomDriverAttack/CapcomLoader.cpp ../../Core/MemWarsServicesCore.cpp ../../Core/MemWarsCore.c /link user32.lib ntdll.lib Advapi32.lib Shlwapi.lib