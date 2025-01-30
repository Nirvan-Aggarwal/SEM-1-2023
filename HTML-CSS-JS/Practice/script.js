// TypeScript function to change the content of the <p> element
function changeText() {
    const paragraph = document.getElementById("demo");
    if (paragraph) {
        paragraph.innerHTML = "Text has been changed by TypeScript!";
    }
}

// Event listener to trigger the function when the button is clicked
const button = document.getElementById("myButton");
if (button) {
    button.addEventListener("click", changeText);
}
