#include <stdint.h>
#include <stddef.h>

uint8_t token[] = "<Token-Here>";
uint8_t channel_name[] = "<Channel-Name-Here>";

int main(void) {
    //Creating the bots and their basic information
    Discord::Bot bot1, bot2;
    bot1.token = token;
    bot2.token = token;

    //Connecting bots to servera
    Discord::connect(bot1);
    Discord::connect(bot2);

    //Geting an id of a channel
    size_t channel_id = Discord::getChannelId(channel_name);

    uint8_t msg[] = "Hello World";

    //Sending information to channles with both bots
    Discord::sendToChannel(bot1, msg, channel_id);
    Discord::sendToChannel(bot2, msg, channel_id);

    //DIsconnecting the two bots
    Discord::disconnect(bot1);
    Discord::disconnect(bot2);

}
