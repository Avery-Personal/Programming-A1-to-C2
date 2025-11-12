/*
A1 - Social-Media Bio Program

This is a simple program, for Rust, that can get your input, and give you a generated bio/about me.

The program below will try to dumb things down as much as it can for beginners to understand, and not use any advanced functions.

It is HEAVILY adviced for you to have prior knowledge on basic programming, as Rust is the hardest language topic on this Repo.
*/

// The io file, is the core library when coding in Rust, in this case, allowing you to create inputs.
use std::io::{self, Write};

// When creating your main script in Rust, it wont read it top to bottom like others might; Rust looks for a function called main, to know where to start actually running its file.

// For now, we won't use any functions besides main, to ease it as much as possible
fn main() {
    // The print function (print) can receive data/variables to print out data, but not to take in data, like input. We'll have to use a seperate function, which you'll see next.
    print!("Enter username: ");

    // Rust prints a little funky; The default print in Rust is actually println, which means print line, but when using that for inputs, you'll get a weird little thing on the output, it makes you print on the next line! To prevent this, we use print instead.
    // The code part below is an extension to the print, which gets the I/O library we added, grabs its standard output, and tells it to flush, which means it tells Rust to display the print information before waiting for output.
    // The unwrap after flush, is a simple helper for debugging, stopping the code if it finds an error, and tells us what went wrong.
    io::stdout().flush().unwrap();

    // When creating a variable, you use the let keyword, to LET a variable be something. The mut keyword, after let, means mutable, which allows the variable's value to be changed.
    // When initializing the variable's value, you create a new string type by use the new function, after string.
    let mut username = String::new();

    // Unlike other languages, Rust doesn't have direct calls of inputs. You need to call std/io before saying the input function names. std stands for standard, so when someone says std::io, that just means you're calling the standard input/output.
    
    // Using the io library we called at the start of the script, we can receive inputs, using the stdin keyword, which stands for standard input.
    io::stdin()
        // When using the standard input, we need to actually read the data to input for a variable. Using the .read_line function, we can call our variable we want to change. Due to needing our data to be mutable, we say &mut, to say we are having the variable be mutable, then the variable of our choice afterwards, which is username.
        .read_line(&mut username)

        // When your input fails, you will need a callback, an expected value to be received, when you don't get the excepted value, the .expect function is called, which causes an error with a print statement of your choice. In this case we failed to read the user.
        .expect("Failed to read username");

    // When asking for the input of a string, Rust by default gives it a newline at the end of the string, although meant to be a nice way of letting you auto print a value underneath it, we will not be using it for that in this instance.
    // We'll use the .trim in the username, to take off the newline from the string, making it purely the string's value without it.
    let username = username.trim();

    // Same concept as the username, just for the age instead.
    print!("Enter age: ");
    io::stdout().flush().unwrap();

    // Due to how the standard I/O works on Rust, we cannot directly ask for an input of non-strings. For now, age will be a string, you will see how it gets converted later.
    let mut age_input = String::new();

    io::stdin()
        .read_line(&mut age_input)
        .expect("Failed to read age");

    // With the string finished, we will now make the age into an integer, but we still have a little more steps to actually convert it.
    let age: u32 = age_input
        // The .trim removes the newline from the string, as all have it by default, we need to do this before converting the age to a number, as numbers in Rust cannot possess non-numerical values.
        .trim()

        // When creating a value using another, we'll need to parse them if it's not exactly the same variable type. In this case, we're parsing the string to be a number.
        .parse()

        // We're now creating another fallback, similar to the inputs' expected value, we're sending an error if it isn't able to be converted to a number.
        .expect("Please enter a valid number");

    // Lastly, we'll do the same concept as the username & age, just for the hobbies.
    print!("Enter favorite hobby: ");
    io::stdout().flush().unwrap();

    let mut hobby = String::new();

    io::stdin()
        .read_line(&mut hobby)
        .expect("Failed to read favorite hobby");

    // As said with the username and Rust's input technique, we'll need to trim the hobby again, to get rid of the newline.
    let hobby = hobby.trim();
    
    println!("Hey there! I'm {username}, I'm {age}, and like to do {hobby}. I hope to post a lot of content over the next couple of months!");

    // Additional Notes \\

    // When using Rust, you'll want to make sure to use lower-cased variable names, with words seperated with underscores. This technique is called the snake case technique, which prevents you accidently naming your variable one of Rust's libraries/functions
}