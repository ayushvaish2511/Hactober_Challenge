// var myname="Naushad Ali"
// console.log(myname)


// let sum=10+"56"//concatenation
// console.log(sum)

// let sum1=10+"Naushad"//concatenation
// console.log(sum1)

// let sub=10-"72"
// console.log(sub)//Bug

// var fruit="mango"
// if(furit="apple"){
//     console.log("But i like mango")
// }else
// {
//  console.log("Yay!! Mango")
// }

// while loops

// var num=1
// while(num<11){
//     console.log(num*2)
//     num++
// }

//do while

// var num=12
// do{
//     console.log(num*2);
//     num++
// }while(num<11);

// for loop

// for(num=1;num<11;num++){
//     debugger;
//     console.log(num*2);
// }

//Function 


// function sum(a,b){/here we have parameters
//     var a,b;
//     var c=a+b;
//     console.log(c);
// }/

// sum(22,45);//here we have arguments

//funciton expression
//it means create a function and put it into the variable also we need to use return keyword

// function sum(a,b){
//     var a,b;
//     return c=a+b; 
// }

// var funExp= sum(5,25);
// console.log("the sum of two numbers is = "+funExp);


/*Anonymous func*/ 
// var funExp= function (a,b){
//     var a,b;
//     return c=a+b; 
// }
// // name of function is not given

// //console.log("sum is = "+ funExp(24,67));

// sum=funExp(24,67);
// sum1=funExp(34,89)
// console.log("sum is = "+ sum);
// console.log("sum is = "+ sum1);


/* Modern javascript */
// 1996 , submitted to ECMA international got official recogination so js=ecma script every year it is updated
//  , 2015 decided for the annual releases (ES6)

//let and conts
//template string
//arroe function
//rest and spread and manymore...



// let const var
//var= function scope 
//let=block scope


// function shoppingItems(){
//     var item1="shoes_nike";
//     let item2="shirt_hm";
// if (true){
//     let item3="shoes_puma";
//     var item4="shirt_duke"
//     console.log("New item is added + ");
//     console.log("item1 in inside if "+item1);
//     console.log("item2 in inside if "+item2);
    
// }
// console.log("item one is " + item1);
// console.log("item two is " + item2);
// console.log("item four is " + item4);//var has  func scope so it will print evenif it outside the if"block scope"  
// console.log("new item is " + item3);//due to block scope constraints it will not give any output

// }

// shoppingItems();
// console.log("item one is " + item1);


/* Template Literals */

// for(let num=1;num<6;num++){
//     tableOf=5
//     // console.log(tableOf+ " * " + num +" = "+tableOf*num);
    
//     console.log( `${tableOf}  * ${num}  =  ${tableOf*num} `);
// }


/* Default parameter */

// let myExp =function(a,b=6){
//     return a*b;
// }

// var mult1 = myExp(2,3);
// var mult2 = myExp(6);
// console.log(mult1);
// console.log(mult2);


/* Fat Arrow funtion */

// normal Way

// function sum(a,b){
//     let a,b;
//     let total=a+b;
//     return total
// }

// sum();

//fat arrow way

// ' i.e let var sum which is a func "()" defined in a block scope '

// const sum =() =>{
//     let a=67,b=33;
    
//     return ` the sum is ${a+b}`
// }

// console.log(sum());

//one liner fat arrow func

// const sum =() =>  `sum is ${(a=4) + (b=7)}`;
// console.log(sum());













