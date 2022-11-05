import React from "react";
import ReactDOM from "react-dom";
// import nameanything, { doublepi, triplepi } from "./math";
import * as pi from "./math";
console.log(pi);
// if u want to import everything from afile then use  *
//import krange toh it will lookfor default and export that and that we canimport by naming it anything
// now in case of non default exports we have to  anme them, the same
// import and export allow us to break the large code files
// when we  did var react = require("react") this also did the same thing
// we dont use * muc because we only wnat to import what we need and that makes our code clear
ReactDOM.render(
  <ul>
    <li>{pi.default}</li>
    <li>{pi.doublepi()}</li>
    <li>{pi.triplepi()}</li>
  </ul>,
  document.getElementById("root")
);
