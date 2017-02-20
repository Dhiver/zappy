# Zappy server

School project where we had to develop a server for the zappy game.

Compile using `make`.

```text
USAGE:
        ./server -p port -x width -y height -n team_names -c client_nbr [-t delay]

DESCRIPTION:
        -p      port
        -x      width of the world
        -y      height of the world
        -n      name_of_team_1 name_of_team2 ...
        -c      number of clients allowed at the game beginning
        -t      time delay for executing actions
```

Features:

* No memory leaks
* IPv6 compliant