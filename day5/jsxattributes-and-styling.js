import React from "react";
import ReactDOM from "react-dom";
// property for class is className, all attributes in html are camel cased
//prefreed way  of applying css is same as writing css in css and  giving classes
const img = "https://picsum.photos/200";
ReactDOM.render(
  <div>
    <h1 className="heading" contentEditable="true" spellCheck="false">
      My Favourite Foods
    </h1>
    <ul>
      <li>Bacon</li>
      <li>Jamon</li>
      <li>Noodles</li>
    </ul>
    {/* <img
      className="img1"
      src="https://cdn.pixabay.com/photo/2015/04/23/22/00/tree-736885__480.jpg"
    />
    <img
      className="img1"
      src="https://images.pexels.com/photos/268533/pexels-photo-268533.jpeg?auto=compress&cs=tinysrgb&dpr=1&w=500"
    /> */}
    <img src={img + "?grayscale"} alt="random" />
    {/* we can also insert js as attribute 
    we are getting so many warnings because codesandbox has linters so if we dont do anthing right then it shows like add alt in img*/}
  </div>,
  document.getElementById("root")
);
