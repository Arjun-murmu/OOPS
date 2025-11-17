from django.shortcuts import render, redirect, get_object_or_404
from django.http import HttpResponse
from .models import Student, Task

# Create your views here.
def home(request):

    tasks = Task.objects.all().order_by('-id')
    return render(request, 'home.html', {'tasks': tasks})
    # return render(request, 'home.html')
    # return HttpResponse("Hello, Django! This is my first app.<br>" \
    # "This is 30 days of Django learning program.<br>" \
    # "Today is day 2.")

def base(request):
    return render(request, 'base.html')

def about(request):
    return render(request, 'about.html', {'author': 'Jaga Murmu'})
    # return HttpResponse("I am about page.")
    
def details(request):
    content = {'name': 'Django Learner, I am Arjun.', 'age': 21, 'country': 'India', 'city': 'Balasore', 'profession': 'Developer'}
    return render(request, 'details.html', content)

def student_list(request):
    students = Student.objects.all()
    return render(request, 'student.html', {'students' : students})

def add_task(request):
    if request.method == 'POST':
        title = request.POST.get('title')
        Task.objects.create(title=title)
        return redirect('home')
    return redirect('home')

def delete_task(request, task_id):   # 👈 Add this function
    task = Task.objects.get(id=task_id)
    task.delete()
    return redirect('home')

def update_task(request, task_id):
    task = get_object_or_404(Task, id=task_id)
    if request.method == 'POST':
        task.title = request.POST.get('title')
        task.save()
        return redirect('home')
    return render(request, 'update.html', {'task': task})