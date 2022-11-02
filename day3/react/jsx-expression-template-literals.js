import React from "react";
import ReactDOM from "react-dom";
const fname = "vaibhav";
const lname = "sharma";
// now i want to say hello and then my name and i cant do hello name becaus ethat will be interpreted as string
// now if i want to insert js in html we have to wrap the js in bw {} once u open up the curly bracket u can do any js expression
// icant wriyte the js statment inside the {}
// expression will be evaluated to a value wheras statment will not be like that it will ask computer to do something like if else
// watch the video of expression vs statemnt
// in between h1 all is string so we can just seprate two { }by space
// we can also use template literals
const luckynumber = 90;
ReactDOM.render(
  <div>
    <h1>Hello {fname + " " + lname}!</h1>
    <h1>
      {" "}
      hello {fname} {lname}
    </h1>
    <h1> hello {`${fname} ${lname}`}</h1>
    <p> lucky number is {Math.floor(Math.random() * 10)}</p>
  </div>,
  document.getElementById("root")
);
