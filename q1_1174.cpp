// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include"GitHubUser.h"
#include "stdafx.h"
#include <string>
#include<iostream>
using namespace std;

bool Comparison(GitHubUser user1,GitHubUser user2)//this function compares each member of the struct to check whether they are equal or not
{
if (user1.FirstName == user2.FirstName)
return true;
else if(user1.UserName == user2.UserName)
	return true;
else if(user1.email==user2.email)
	return true;
else 
	return false;
//strcmp(user1.FirstName,user1.FirstName);
//	return true;
}
bool exists(GitHubUser* arr, int size, string userName)//check whether username already exists or not
{
for(int i=0;i<size;i++)
{
	if(arr[i].UserName==userName)
	{
		cout<<"username already taken";
		return true;
		//inputFromUser(arr,size);
	}
}
	return false;
}
void inputFromUser(GitHubUser* arr, int size)//takes input from the user
{
//size=2;
bool b=true;
while(b==true)
{
for(int i=0;i<size;i++)
{
	cout<<"enter your username";
	cin>>arr[i].UserName;
	//call exists over here
	b=exists(arr,size,arr[i].UserName);
	if(b==false)
		
	cout<<"enter your First Name";
	cin>>arr[i].FirstName;
	cout<<"enter your email";
	cin>>arr[i].email;
	cout<<"enter your password";
	cin>>arr[i].password;
	cout<<"enter your folder count";
	cin>>arr[i].FolderCount;
}
}
}
void deallocate(GitHubUser* users,GitHubUser* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		delete user[i];
		delete arr[i];
	}
}
GitHubUser* searchUser ( GitHubUser* users, int size, string UserName) //searches the user and returns it's pointer
{
cout<<"Enter the username whose info you are looking for";
cin>>UserName;
for (int i=0;i<size;i++)
{
	if(users[i].UserName==UserName)
			return &users[i];
}
return nullptr;
}
int _tmain(int argc, _TCHAR* argv[])
{
int size=2;
GitHubUser *arr;
inputFromUser(arr,size);
GitHubUser *arr;
searchUser(arr,size,arr[0].UserName);
return 0;
}

