1.1	Instead of running a give number of points, run as many points as you can in 100 seconds. How many points were you able to compute for your bash and your compiled implementations?
Bash Implementation: ~7132 points
Compiled Implementation: 7420021 points


1.2 Which code was faster and why?
The C code was significantly faster. Bash is an interpreted language, while C is a compiled language. 
Interpreted languages must be translated at run time to machine instructions. 
A compiled language can be executed directly by the computers CPU.

1.3 Did you notice any difference in the accuracy? If there was a difference, what could you attribute this to?

For my results, when executing the bash script with 10,000 points, I was receiving random syntax errors and displaying the same estimated value of pi as the previous “1000” trials. 
However, the trials before that, I was receiving no syntax errors when executing the script. This is due to the high load for the interpreted language.  
The method, object, and global variable space model is dynamic, thus requiring many extra hash-table lookups on each access to a variable or a method call.