# GitHub PR practice — sandbox repo

Repo này **không phải production**. Mục đích là quen tay với nhánh Git, commit, **Pull Request (PR)** và review — sai và sửa đều là phần học.

## Luật chơi

1. Không làm việc trực tiếp trên `main` để học nhánh và PR.
2. Mỗi thay đổi có ý là một nhánh riêng, một PR riêng.
3. Viết tiêu đề PR và commit message có thể đọc hiểu (ngắn, rõ làm gì).

## Chuẩn tên nhánh và commit (gợi ý)

- Nhánh: `docs/readme-fix`, `chore/add-student-file`, `docs/weekly-2026-01-15`.
- Commit: `docs: sửa typo README`, `chore: thêm học viên <tên>`.

Chi tiết quy trình xem **`CONTRIBUTING.md`**

## Cấu trúc đề xuất (tạo dần bằng PR)

```
students/     # một file Markdown / học viên
weekly/       # báo tuần ngắn (5 dòng là đủ)
```

## Chuỗi bài PR (tuần 1–2)

Làm lần lượt — xong một PR được merge **rồi** mới bài sau (tránh PR quá lớn).

| Thứ tự | Việc cần làm |
|--------|----------------|
| 1 | PR nhỏ: sửa typo / thêm 1 bullet vào README . |
| 2 | Thêm `students/<your-name>.md` với vài dòng giới thiệu và mục tiêu học kỳ. |
| 3 | Tạo `weekly/YYYY-MM-DD.md` — 5 dòng: học gì / kẹt chỗ nào / tuần sau làm gì. |
| 4 (tuỳ) | Đề xuất chỉnh `CONTRIBUTING.md` (ví dụ thêm quy ước đặt tên nhánh cho lớp). |

## Khi học conflict

Sau khi quen merge, có thể luyện **resolve conflict**: hai nhánh sửa cùng một dòng — merge một nhánh trước; nhánh còn lại rebase/sync rồi sửa file trên máy và push tiếp.
