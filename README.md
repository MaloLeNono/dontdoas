# dontdoas: The only doas/sudo-style utility that runs all your commands in constant time

Have you ever wanted to run a command, but you thought: "Damn, I wish all these commands took the exact same amount of time to execute"?
Well, worry not! `dontdoas` is here to save the day!

## How do I use it?

`dontdoas` is very simple to use! The usage is as follows:

`dontdoas <options> <command>`

The following options are currently supported:

`--help`: Doesn't provide help.

`--sandbox`: Doesn't run in sandbox.

`--veromikka`: That's for you to figure out...

`--user`: Doesn't doas as a user.

## How do I install this incredible package?

It's very simple!

If you are on Arch Linux or any of its derivatives, you can easily install it by installing the `dontdoas` package on the AUR using your favourite AUR helper!

If you are not on Arch Linux, you can alternatively follow these steps:

1. Clone the repository: `git clone https://github.com/MaloLeNono/dontdoas.git`
2. Go inside the repository: `cd dontdoas`
3. Compile `main.c`: `gcc -O2 -o dontdoas main.c`
4. Run dontdoas! `./dontdoas <options> <command>`
