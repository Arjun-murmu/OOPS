from django.db import models

# Create your models here.

class Student(models.Model):
    name = models.CharField(max_length = 100)
    roll_no = models.IntegerField(unique = True)
    branch = models.CharField(max_length = 50)
    email_id = models.EmailField(unique = True)
    created_at = models.DateTimeField(auto_now_add = True)

    def __str__(self):
        return self.name
    
class Task(models.Model):
    title = models.CharField(max_length=100)
    completed = models.BooleanField(default=False)

    def __str__(self):
        return self.title

