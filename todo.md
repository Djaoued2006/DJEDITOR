// DONE
+ need to handle the enter key in the middle of a line 
    + create a new line between the current row and the next one and then move all the the data after the current cursor position to the next row and put the cursor there


// DONE
+ implementation of the undo operation
    + at each one of these keys '\n', ' ', '\t', backspace, take a snapshot of the current editor state 
    + use a stack of snapshots
    + each snapshot is an editor (copy all the config there)

    + when pressing the back space ctrl + z call the undo function


// DONE

++ need to fix the undo problem (rows contents are not handled well)    

+ add the search functionality