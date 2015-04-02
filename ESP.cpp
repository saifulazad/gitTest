#include <cstdio>
// sadi add
//
// sadi add more line
// hold response
//u take any response randomly from here
// but a valid response is followed by OK substring

// Change from sadi
const char response[][40] = {"List of values OK","VAL  OK", "OK", "wifi HOME -86", "ERROR"};



/*



@description
Sent data via UART 16550 peripherals
@param
command           char array

@return

*/

char sent(char *command , int timeout =3)
{
    //wait timeout till
	// Zuel will do it
    // get response
    /*
        get a random response
        use rand function of c
        a successful response is followed by OK
    */
	// zuel korse
}
/*
@ Description
sent command "AT" to check device is ready


@ param
void


@return
bool

some new lines



t

*/

bool isAlive()
{
    sent("AT");
    // wait 3 sec

    /*
        if get OK response then return true
        otherwise false

    */
}

/*
@description
This function will provide the Fw version of connected module

@param

void

@return

char[]  the fw version

*/
char* getFwVersion()
{
    sent("AT+GMR");
}

/*
@description
This function will provide the  connected AP

@param

void

@return

char[]  the AP IP
char[]  the Station IP

*/

char* current_network()
{
    sent(" AT+CWJAP?");
}
/*
@Description
This is auth function connect with wifi AP
with user info SSID name and pass

@param

SSID           char array
password       char array

@return

char[]  the AP IP
char[]  the Station IP
*/
char* connect2wifi(char *SSID , char *password)
{
    /*
    string containing "" so use escape char :)
    */
  //  sent("AT+CWJAP="",""")
}
/*
@Description
Will search the sorounding Wi-Fi AP
@param

void

@return
list of sorounding Wi-Fi AP

*/


/*
@description

This function will accomplished the whole connection
process . Make the device ready for TCP/IP communication

@param

void

@return

bool

*/
bool connection_manager()
{
    if ( isAlive())
    {
        //if()
    }
    else
    {
        return false ; // as no response
    }
}
int main()
{
    printf("Hi Sadi");
}
