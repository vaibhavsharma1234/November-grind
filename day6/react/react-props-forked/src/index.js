import React from "react";
import ReactDOM from "react-dom";
// this a perfect usecase for react as repetative elemet is there. i want to have diffrent pieces of informationinn diffrent card
// abilty to send the cards a custom data
// custom pieces of information paased to html like by attributes like place holder in input
// we cant define our own attribute . react componenets ko think like our own made tag like h1 so we can create our won attri here we call them properties or  props
// props is a object which contain all the properties
// we can remove the hardcoded things now
// we cant pass the style to the componenets because it will tink like this is our own created attribute

function Card(props) {
  console.log(props);
  return <div>
   

    <h2>{props.name}</h2>
    <img
      src={props.img}
      alt="avatar_img"
    />
    <p>{props.tel}</p>
    <p>{props.email}</p>
  </div>

}
ReactDOM.render(
  <div>
  <h1> my contacts</h1>
  <Card name="beyonce" img="https://blackhistorywall.files.wordpress.com/2010/02/picture-device-independent-bitmap-119.jpg" tel="+123 456 789" email= "b@beyonce.com" />
  {/* its like i am calling the function card , when card will be created it will havea propety name with it  */}
  <Card name="vaibhav" img="https://picsum.photos/200" tel="123" email="react@gmail.com" />


   
  </div>,
  document.getElementById("root")
);
