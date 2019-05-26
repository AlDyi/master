from django.shortcuts import render
from blog.articles.models import Article
from django.http import Http404
from django import template


def archive(request):
    return render(request, "archive.html", {"posts": Article.objects.all()})


def get_article(request, id):
    try:
        post = Article.objects.filter(id=id)
        return render(request, 'article.html', {"posts": post})
    except Article.DoesNotExist:
        raise Http404