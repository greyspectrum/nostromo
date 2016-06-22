#include <stdio.h>

int main (void)
{

	char	response;

	printf	("\n %s", "Booting...\n\n");
	printf	("%s", "Unix version 4.1.0-rcl-flight-safe_stable-0x180924609\n");
	printf	("%s", "CPU: ARMv7-M revision 3 (ARMv7M), cr=0000000\n");
	printf	("%s", "CPU: INSTRUCTION SET=STANDARD, Ready...\n");
	printf	("%s", "Machine model: 12493.D\n");
	printf	("%s", "Press \"ENTER\" to continue... ");
	scanf	("%c", &response);

	if	( response == 'c' )	
			printf	("\n %s", "ISO Integrity Check: Verifying...\n");
	else		
			printf	("\n %s", "ISO Integrity Check: Verifying...\n");
	printf	("%s", "unix-version-4.1.0-rcl-flight-safe_stable-0x180924609.iso.asc\n");
	printf	("%s", "gpg: Signature made Wed 06 Jan 2079 08:06:20 AM GMT using RSA key ID 2F43CB21\n");
	printf	("%s", "gpg: Good signature from \"WEYLAND YUTANI LTD. <MASTER@WEYLANDYUTANI.COM>\"\n");
	printf	("%s", "gpg: WARNING: This key is not certified with a trusted signature!\n");
	printf	("%s", "gpg: WARNING: (\"WARNING: This key is not certified with a trusted signature!\") == STANDARD WARNING\n");
	printf	("%s", "Primary key fingerprint: 6895 8F53 07D1 2AFD 9344  AF6D 35F3 6FFA CB5C C280\n");
	printf	("%s", "CORE_BOOT INTEGRITY CHECK COMPLETE: STATUS == OK\n");
	printf	("%s", "Press \"ENTER\" to continue... ");
	scanf	("%c", &response);

	if	( response == 'c' )
			printf	("\n %s", "Initializing Kernel...\n");
	else
			printf	("\n %s", "Initializing Kernel...\n");
	printf	("%s", "OK\n");
	printf	("%s", "INIT: FLIGHT_SAFE (skip SYSD)\n");
	printf	("%s", "SATA: mounting tape_sda1... OK\n");
	printf	("%s", "SATA: mounting tape_sda2... OK\n");
	printf	("%s", "SATA: mounting tape_sda5... OK\n");
	printf	("%s", "...LOGICAL VOLUME READY.\n");
	printf  ("%s", "Press \"ENTER\" to continue... ");
        scanf   ("%c", &response);

        if      ( response == 'c' )
                        printf  ("\n %s", "Performing System Checks...\n");
        else
                        printf  ("\n %s", "Performing System Checks...\n");
	printf	("%s", "Sys Avionics... OK\n");
	printf	("%s", "Sys Airlocks... OK\n");
	printf	("%s", "Sys MainBusA... OK\n");
	printf	("%s", "Sys MainBusB... OK\n");
	printf	("%s", "Sys LifeSupp... OK\n");
	printf	("%s", "Sys FireSupr...	OK\n");
	printf	("%s", "Sys HypSleep... OK\n");
	printf	("%s", "Sys CabPress... OK\n");
	printf	("%s", "Sys NaviCOMP... OK\n");
	printf	("%s", "Sys FligCOMP... OK\n");
	printf	("%s", "Sys ReactorA... OK\n");
	printf	("%s", "Sys ReactorB... OK\n");
	printf	("%s", "Sys EVACMAIN... Error\n");
	printf	("%s", "Sys AuxThrus... OK\n");
	printf	("%s", "Sys VentMAIN... Error\n");
	printf	("%s", "Sys FuelCell... OK\n");
	printf	("%s", "Sys Commint1... OK\n");
	printf	("%s", "Sys Commint2... OK\n");
	printf	("%s", "Sys CommMAIN... OK\n");
	printf	("%s", "Sys CircMAIN... OK\n");
	printf  ("%s", "Press \"ENTER\" to continue... ");
        scanf   ("%c", &response);

        if      ( response == 'c' )
                        printf  ("\n %s", "System Checks Complete:\n");
        else
                        printf  ("\n %s", "System Checks Complete:\n");
	
	printf	("%s", "WARNING ::\n");
	printf	("%s", "Flight Systems	== GO\n");
	printf	("%s", "Main Systems	== GO\n");
	printf	("%s", "Aux Systems	== GO\n");
	printf	("%s", "[SysError < MEAN] && OPERATIONAL\n");
	printf	("\n %s", "Execute? Y/n: ");
	scanf	("%c", &response);

	if	( response == 'y' || response == 'Y' )
			printf	("\n %s", "BOOT COMPLETE\n");
	else
			printf	("%s", "SYSTEM ERROR\n");
	printf	("\n %s", "COMPUTER:	12493.D\n");
	printf	("%s", "SHIP:           NOSTROMO\n");
	printf	("%s", "OWNER:          WEYLAND YUTANI LTD.\n");
	printf	("%s", "REGISTRATION:   180924\n");
	printf	("%s", "FUNCTION:       TANKER/REFINERY\n");
	printf	("%s", "CAPACITY:       200 000 000 TONNES\n");
	printf	("%s", "POSITION:       4QFJ 12345 67890 ICRF\n");
	printf	("%s", "COURSE:         297 / DECLINATION 1 DEGREE 2'4\" / ICRF\n");
	printf	("%s", "VELOCITY:       458 m/s\n");
	printf	("\n\n %s", "Press \"ENTER\" to complete BOOTCHECK...\n");

	return 0;
}
