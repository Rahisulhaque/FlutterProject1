import 'package:flutter/material.dart';


class myWidget extends StatelessWidget{
  @override
  Widget build (BuildContext build){
  return Center(
    child: Container(
      color: Colors.yellow,
      height: 400.0,
      width: 300.0,
      child: Center(child:Text("Hello again!", style: TextStyle(fontSize: 40.0, color: Colors.blue),),),)
    );
   } }

void main(){
  runApp(
    MaterialApp(
      debugShowCheckedModeBanner: false,
      home : Scaffold(
        appBar: AppBar(
          title: Text("Hello World"),),
        body: myWidget(),
            
      ),
    ),
  );
}