<h1>0x07. Python - Test-driven development </h1>

Implementation of doc test, unit test , interactive and uninteractive tests in projects, the various task below where handled with use of these various tests.

<br>
<br>
<br>

<!-- task 0-->
<div>
<h2> 0. Integers addition </h2>
<div>
<h3>Write a function that adds 2 integers.</h3>

<ul>
<li>Prototype: def add_integer(a, b=98):</li>
<li>a and b must be integers or floats, otherwise raise a TypeError exception with the message a must be an integer or b must be an integer</li>
<li>a and b must be first casted to integers if they are float</li>
<li>Returns an integer: the addition of a and b</li>
<li>You are not allowed to import any module</li>
</ul>

</div>
</div>

<!-- task 1-->
<div>
<h2> 1. Divide a matrix </h2>
<div>
<h3>Write a function that divides all elements of a matrix.</h3>

<ul>
<li>Prototype: def matrix_divided(matrix, div):</li>
<li>matrix must be a list of lists of integers or floats, otherwise raise a TypeError exception with the message matrix must be a matrix (list of lists) of integers/floats</li>
<li>Each row of the matrix must be of the same size, otherwise raise a TypeError exception with the message Each row of the matrix must have the same size</li>
<li>div must be a number (integer or float), otherwise raise a TypeError exception with the message div must be a number</li>
<li>div can’t be equal to 0, otherwise raise a ZeroDivisionError exception with the message division by zero</li>
<li>All elements of the matrix should be divided by div, rounded to 2 decimal places</li>
<li>Returns a new matrix</li>
<li>You are not allowed to import any module</li>
</ul>

</div>
</div>


<!-- task 2-->
<div>
<h2> 2. Say my name </h2>
<div>
<h3>Write a function that prints My name is [first name] [last name]</h3>

<ul>
<li>Prototype: def say_my_name(first_name, last_name=""):</li>
<li>first_name and last_name must be strings otherwise, raise a TypeError exception with the message first_name must be a string or last_name must be a string</li>
<li>You are not allowed to import any module</li>
</ul>

</div>
</div>

<!-- task 3-->
<div>
<h2> 3. Print square </h2>
<div>
<h3>Write a function that prints a square with the character #.</h3>

<ul>
<li>Prototype: def print_square(size):</li>

<li>size is the size length of the square</li>

<li>size must be an integer, otherwise raise a TypeError exception with the message size must be an integer</li>

<li>if size is less than 0, raise a ValueError exception with the message size must be >= 0</li>

<li>if size is a float and is less than 0, raise a TypeError exception with the message size must be an integer</li>

<li> You are not allowed to import any module </li>
</ul>

</div>
</div>


<!-- task 4-->
<div>
<h2> 4. Text indentation </h2>
<div>
<h3>Write a function that prints a text with 2 new lines after each of these characters: ., ? and :</h3>

<ul>
<li>Prototype: def text_indentation(text):</li>

<li>text must be a string, otherwise raise a TypeError exception with the message text must be a string</li>

<li>There should be no space at the beginning or at the end of each printed linet</li>

<li>You are not allowed to import any module</li>

</ul>

</div>
</div>


<!-- task 5-->
<div>
<h2> 5. Max integer - Unittest </h2>
<div>
<h3>Since the beginning you have been creating “Interactive tests”. For this exercise, you will add Unit tests.</h3>
<h3>
In this task, you will write unit tests for the function def max_integer(list=[]):
</h3>

<ul>
<li>Your test file should be inside a folder tests</li>

<li>You have to use the unittest module</li>

<li>Your test file should be python files (extension: .py)</li>

<li>Your test file should be executed by using this command: python3 -m unittest tests.6-max_integer_test</li>

<li>All tests you make must be passable by the function below</li>

<li>
We strongly encourage you to work together on test cases, so that you don’t miss any edge case
</li>
</ul>

</div>
</div>