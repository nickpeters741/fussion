# WELCOME!!
This repository was created to cover c programming concept practiucal task,to acertain and enhance ground understanding of the programming language created by Ritchie.

## INFO
- I will be using  `vi`,`emacs` and `vim` just to ensure am okay with either.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- Have included a `README.md` file at the root of the repo,containing a description of the repo
- Included a `README.md` file at the root of the folder of this project, containing a description of the project
- No errors nor warning should popup when compiled.
- My code will use `Betty` style.It will be checked using `betty-style.pl` and `betty-doc.pl`

# MORE INFO
## BETTY LINTER
To run betty linter with command `betty <filename>` :
  - Go to the [Betty](https://github.com/holbertonschool/Betty) repository
  - Clone the repo to local machine.
  - `cd` into Betty directory
  - install the linter with `sudo ./install.sh`
  - copy the script below into editor;

```shell
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
  - Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
  - Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

you can now type betty `<filename>` to run the Betty linter

## This are the file in the repo
1. 0x00-hello_world
2. 0x01-variables_if_else_while
3. 0x02-functions_nested_loops
4. 0x03-debugging
5. 0x04-more_functions_nested_loops
6. 0x05-pointers_arrays_strings
7. 0x06-pointers_arrays_strings


More is to be expected with time.
