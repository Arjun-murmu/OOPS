from django.http import HttpResponse
from django.shortcuts import render

def home(request):
    # return HttpResponse("Hello Home")
    return render(request, 'index.html')
def me(request):
    return render(request, 'me.html')

def contact(request):
    return HttpResponse("Hello Contact <br> MyContact no is : 9556926***")
