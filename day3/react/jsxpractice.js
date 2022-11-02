//Create a react app from scratch.
//It should display a h1 heading.
//It should display an unordered list (bullet points).
//It should contain 3 list elements.
import React from "react";
import ReactDOM from "react-dom";
// ReactDOM.render(<h1>its a heading</h1>,document.getElementById("root"));
ReactDOM.render(
  <div>
    <h1>its a heading</h1>
    <ul>
      <li>first</li>
      <li>second</li>
      {/* <li/> */}
    </ul>
  </div>,
  document.getElementById("root")
);
// tag like image are self closing and li is not self closing but if its vacant then it turns into self closing
