# drawFromTxt

This code takes in a .txt file with a series of coordinates indicating the position of a character.

The input file is formatted as follows:
    x   y   char
    0   1   /
    4   52  |
    
    ...
  
See file heart_mapped.txt as an example .txt file, with the following output:

Enter file name: heart_mapped.txt
                   .-.  .-.
                  |   \/   |
                  \        /
                   `\    /`
               wm!   `\/`

The maximum column and row lengths can also be set.
