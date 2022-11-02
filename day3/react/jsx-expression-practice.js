//Create a react app from scratch.
//It should display 2 paragraph HTML elements.
//The paragraphs should say:
//Created by YOURNAME.
//Copyright CURRENTYEAR.
//E.g.
//Created by Angela Yu.
//Copyright 2019.
// googling kro if u dont know anything
import React from "react";
import ReactDOM from "react-dom";
const name = "vaibhav";
const currentDate = new Date();
console.log(currentDate);
// get full year is a method so () is neccesary
const year = new Date().getFullYear();
ReactDOM.render(
  <div>
    <p>created by {name} </p>
    <p>copyright {year}</p>
  </div>,
  document.getElementById("root")
);
