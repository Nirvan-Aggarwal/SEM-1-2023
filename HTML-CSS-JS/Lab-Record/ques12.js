// Get a reference to the heading element by its ID
var heading = document.getElementById("myHeading");

// Change the text of the heading
heading.innerHTML = "Hello, DOM Manipulation!";

// Get a reference to the paragraph element by its ID
var paragraph = document.getElementById("myParagraph");

// Change the text of the paragraph
paragraph.innerHTML = "You can use JavaScript to modify the DOM dynamically.";

// Get a reference to the button element by its ID
var button = document.getElementById("myButton");

// Add a click event listener to the button
button.addEventListener("click", function () {
    // Change the text of the heading when the button is clicked
    heading.innerHTML = "Button Clicked!";
});