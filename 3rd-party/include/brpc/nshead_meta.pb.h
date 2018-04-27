// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/nshead_meta.proto

#ifndef PROTOBUF_INCLUDED_brpc_2fnshead_5fmeta_2eproto
#define PROTOBUF_INCLUDED_brpc_2fnshead_5fmeta_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "brpc/options.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_brpc_2fnshead_5fmeta_2eproto 

namespace protobuf_brpc_2fnshead_5fmeta_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_brpc_2fnshead_5fmeta_2eproto
namespace brpc {
class NsheadMeta;
class NsheadMetaDefaultTypeInternal;
extern NsheadMetaDefaultTypeInternal _NsheadMeta_default_instance_;
}  // namespace brpc
namespace google {
namespace protobuf {
template<> ::brpc::NsheadMeta* Arena::CreateMaybeMessage<::brpc::NsheadMeta>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace brpc {

// ===================================================================

class NsheadMeta : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:brpc.NsheadMeta) */ {
 public:
  NsheadMeta();
  virtual ~NsheadMeta();

  NsheadMeta(const NsheadMeta& from);

  inline NsheadMeta& operator=(const NsheadMeta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NsheadMeta(NsheadMeta&& from) noexcept
    : NsheadMeta() {
    *this = ::std::move(from);
  }

  inline NsheadMeta& operator=(NsheadMeta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NsheadMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NsheadMeta* internal_default_instance() {
    return reinterpret_cast<const NsheadMeta*>(
               &_NsheadMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(NsheadMeta* other);
  friend void swap(NsheadMeta& a, NsheadMeta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NsheadMeta* New() const final {
    return CreateMaybeMessage<NsheadMeta>(NULL);
  }

  NsheadMeta* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NsheadMeta>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NsheadMeta& from);
  void MergeFrom(const NsheadMeta& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NsheadMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string full_method_name = 1;
  bool has_full_method_name() const;
  void clear_full_method_name();
  static const int kFullMethodNameFieldNumber = 1;
  const ::std::string& full_method_name() const;
  void set_full_method_name(const ::std::string& value);
  #if LANG_CXX11
  void set_full_method_name(::std::string&& value);
  #endif
  void set_full_method_name(const char* value);
  void set_full_method_name(const char* value, size_t size);
  ::std::string* mutable_full_method_name();
  ::std::string* release_full_method_name();
  void set_allocated_full_method_name(::std::string* full_method_name);

  // optional bytes user_string = 9;
  bool has_user_string() const;
  void clear_user_string();
  static const int kUserStringFieldNumber = 9;
  const ::std::string& user_string() const;
  void set_user_string(const ::std::string& value);
  #if LANG_CXX11
  void set_user_string(::std::string&& value);
  #endif
  void set_user_string(const char* value);
  void set_user_string(const void* value, size_t size);
  ::std::string* mutable_user_string();
  ::std::string* release_user_string();
  void set_allocated_user_string(::std::string* user_string);

  // optional int64 correlation_id = 2;
  bool has_correlation_id() const;
  void clear_correlation_id();
  static const int kCorrelationIdFieldNumber = 2;
  ::google::protobuf::int64 correlation_id() const;
  void set_correlation_id(::google::protobuf::int64 value);

  // optional int64 log_id = 3;
  bool has_log_id() const;
  void clear_log_id();
  static const int kLogIdFieldNumber = 3;
  ::google::protobuf::int64 log_id() const;
  void set_log_id(::google::protobuf::int64 value);

  // optional int32 attachment_size = 4;
  bool has_attachment_size() const;
  void clear_attachment_size();
  static const int kAttachmentSizeFieldNumber = 4;
  ::google::protobuf::int32 attachment_size() const;
  void set_attachment_size(::google::protobuf::int32 value);

  // optional .brpc.CompressType compress_type = 5;
  bool has_compress_type() const;
  void clear_compress_type();
  static const int kCompressTypeFieldNumber = 5;
  ::brpc::CompressType compress_type() const;
  void set_compress_type(::brpc::CompressType value);

  // optional int64 trace_id = 6;
  bool has_trace_id() const;
  void clear_trace_id();
  static const int kTraceIdFieldNumber = 6;
  ::google::protobuf::int64 trace_id() const;
  void set_trace_id(::google::protobuf::int64 value);

  // optional int64 span_id = 7;
  bool has_span_id() const;
  void clear_span_id();
  static const int kSpanIdFieldNumber = 7;
  ::google::protobuf::int64 span_id() const;
  void set_span_id(::google::protobuf::int64 value);

  // optional int64 parent_span_id = 8;
  bool has_parent_span_id() const;
  void clear_parent_span_id();
  static const int kParentSpanIdFieldNumber = 8;
  ::google::protobuf::int64 parent_span_id() const;
  void set_parent_span_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:brpc.NsheadMeta)
 private:
  void set_has_full_method_name();
  void clear_has_full_method_name();
  void set_has_correlation_id();
  void clear_has_correlation_id();
  void set_has_log_id();
  void clear_has_log_id();
  void set_has_attachment_size();
  void clear_has_attachment_size();
  void set_has_compress_type();
  void clear_has_compress_type();
  void set_has_trace_id();
  void clear_has_trace_id();
  void set_has_span_id();
  void clear_has_span_id();
  void set_has_parent_span_id();
  void clear_has_parent_span_id();
  void set_has_user_string();
  void clear_has_user_string();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr full_method_name_;
  ::google::protobuf::internal::ArenaStringPtr user_string_;
  ::google::protobuf::int64 correlation_id_;
  ::google::protobuf::int64 log_id_;
  ::google::protobuf::int32 attachment_size_;
  int compress_type_;
  ::google::protobuf::int64 trace_id_;
  ::google::protobuf::int64 span_id_;
  ::google::protobuf::int64 parent_span_id_;
  friend struct ::protobuf_brpc_2fnshead_5fmeta_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NsheadMeta

// required string full_method_name = 1;
inline bool NsheadMeta::has_full_method_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NsheadMeta::set_has_full_method_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NsheadMeta::clear_has_full_method_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NsheadMeta::clear_full_method_name() {
  full_method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_full_method_name();
}
inline const ::std::string& NsheadMeta::full_method_name() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.full_method_name)
  return full_method_name_.GetNoArena();
}
inline void NsheadMeta::set_full_method_name(const ::std::string& value) {
  set_has_full_method_name();
  full_method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.full_method_name)
}
#if LANG_CXX11
inline void NsheadMeta::set_full_method_name(::std::string&& value) {
  set_has_full_method_name();
  full_method_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:brpc.NsheadMeta.full_method_name)
}
#endif
inline void NsheadMeta::set_full_method_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_full_method_name();
  full_method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.NsheadMeta.full_method_name)
}
inline void NsheadMeta::set_full_method_name(const char* value, size_t size) {
  set_has_full_method_name();
  full_method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.NsheadMeta.full_method_name)
}
inline ::std::string* NsheadMeta::mutable_full_method_name() {
  set_has_full_method_name();
  // @@protoc_insertion_point(field_mutable:brpc.NsheadMeta.full_method_name)
  return full_method_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NsheadMeta::release_full_method_name() {
  // @@protoc_insertion_point(field_release:brpc.NsheadMeta.full_method_name)
  if (!has_full_method_name()) {
    return NULL;
  }
  clear_has_full_method_name();
  return full_method_name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NsheadMeta::set_allocated_full_method_name(::std::string* full_method_name) {
  if (full_method_name != NULL) {
    set_has_full_method_name();
  } else {
    clear_has_full_method_name();
  }
  full_method_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), full_method_name);
  // @@protoc_insertion_point(field_set_allocated:brpc.NsheadMeta.full_method_name)
}

// optional int64 correlation_id = 2;
inline bool NsheadMeta::has_correlation_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NsheadMeta::set_has_correlation_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NsheadMeta::clear_has_correlation_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NsheadMeta::clear_correlation_id() {
  correlation_id_ = GOOGLE_LONGLONG(0);
  clear_has_correlation_id();
}
inline ::google::protobuf::int64 NsheadMeta::correlation_id() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.correlation_id)
  return correlation_id_;
}
inline void NsheadMeta::set_correlation_id(::google::protobuf::int64 value) {
  set_has_correlation_id();
  correlation_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.correlation_id)
}

// optional int64 log_id = 3;
inline bool NsheadMeta::has_log_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NsheadMeta::set_has_log_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NsheadMeta::clear_has_log_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NsheadMeta::clear_log_id() {
  log_id_ = GOOGLE_LONGLONG(0);
  clear_has_log_id();
}
inline ::google::protobuf::int64 NsheadMeta::log_id() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.log_id)
  return log_id_;
}
inline void NsheadMeta::set_log_id(::google::protobuf::int64 value) {
  set_has_log_id();
  log_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.log_id)
}

// optional int32 attachment_size = 4;
inline bool NsheadMeta::has_attachment_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NsheadMeta::set_has_attachment_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NsheadMeta::clear_has_attachment_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NsheadMeta::clear_attachment_size() {
  attachment_size_ = 0;
  clear_has_attachment_size();
}
inline ::google::protobuf::int32 NsheadMeta::attachment_size() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.attachment_size)
  return attachment_size_;
}
inline void NsheadMeta::set_attachment_size(::google::protobuf::int32 value) {
  set_has_attachment_size();
  attachment_size_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.attachment_size)
}

// optional .brpc.CompressType compress_type = 5;
inline bool NsheadMeta::has_compress_type() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void NsheadMeta::set_has_compress_type() {
  _has_bits_[0] |= 0x00000020u;
}
inline void NsheadMeta::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void NsheadMeta::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
inline ::brpc::CompressType NsheadMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.compress_type)
  return static_cast< ::brpc::CompressType >(compress_type_);
}
inline void NsheadMeta::set_compress_type(::brpc::CompressType value) {
  assert(::brpc::CompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.compress_type)
}

// optional int64 trace_id = 6;
inline bool NsheadMeta::has_trace_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void NsheadMeta::set_has_trace_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void NsheadMeta::clear_has_trace_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void NsheadMeta::clear_trace_id() {
  trace_id_ = GOOGLE_LONGLONG(0);
  clear_has_trace_id();
}
inline ::google::protobuf::int64 NsheadMeta::trace_id() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.trace_id)
  return trace_id_;
}
inline void NsheadMeta::set_trace_id(::google::protobuf::int64 value) {
  set_has_trace_id();
  trace_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.trace_id)
}

// optional int64 span_id = 7;
inline bool NsheadMeta::has_span_id() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void NsheadMeta::set_has_span_id() {
  _has_bits_[0] |= 0x00000080u;
}
inline void NsheadMeta::clear_has_span_id() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void NsheadMeta::clear_span_id() {
  span_id_ = GOOGLE_LONGLONG(0);
  clear_has_span_id();
}
inline ::google::protobuf::int64 NsheadMeta::span_id() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.span_id)
  return span_id_;
}
inline void NsheadMeta::set_span_id(::google::protobuf::int64 value) {
  set_has_span_id();
  span_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.span_id)
}

// optional int64 parent_span_id = 8;
inline bool NsheadMeta::has_parent_span_id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void NsheadMeta::set_has_parent_span_id() {
  _has_bits_[0] |= 0x00000100u;
}
inline void NsheadMeta::clear_has_parent_span_id() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void NsheadMeta::clear_parent_span_id() {
  parent_span_id_ = GOOGLE_LONGLONG(0);
  clear_has_parent_span_id();
}
inline ::google::protobuf::int64 NsheadMeta::parent_span_id() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.parent_span_id)
  return parent_span_id_;
}
inline void NsheadMeta::set_parent_span_id(::google::protobuf::int64 value) {
  set_has_parent_span_id();
  parent_span_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.parent_span_id)
}

// optional bytes user_string = 9;
inline bool NsheadMeta::has_user_string() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NsheadMeta::set_has_user_string() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NsheadMeta::clear_has_user_string() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NsheadMeta::clear_user_string() {
  user_string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_string();
}
inline const ::std::string& NsheadMeta::user_string() const {
  // @@protoc_insertion_point(field_get:brpc.NsheadMeta.user_string)
  return user_string_.GetNoArena();
}
inline void NsheadMeta::set_user_string(const ::std::string& value) {
  set_has_user_string();
  user_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.NsheadMeta.user_string)
}
#if LANG_CXX11
inline void NsheadMeta::set_user_string(::std::string&& value) {
  set_has_user_string();
  user_string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:brpc.NsheadMeta.user_string)
}
#endif
inline void NsheadMeta::set_user_string(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_user_string();
  user_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.NsheadMeta.user_string)
}
inline void NsheadMeta::set_user_string(const void* value, size_t size) {
  set_has_user_string();
  user_string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.NsheadMeta.user_string)
}
inline ::std::string* NsheadMeta::mutable_user_string() {
  set_has_user_string();
  // @@protoc_insertion_point(field_mutable:brpc.NsheadMeta.user_string)
  return user_string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NsheadMeta::release_user_string() {
  // @@protoc_insertion_point(field_release:brpc.NsheadMeta.user_string)
  if (!has_user_string()) {
    return NULL;
  }
  clear_has_user_string();
  return user_string_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NsheadMeta::set_allocated_user_string(::std::string* user_string) {
  if (user_string != NULL) {
    set_has_user_string();
  } else {
    clear_has_user_string();
  }
  user_string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_string);
  // @@protoc_insertion_point(field_set_allocated:brpc.NsheadMeta.user_string)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_brpc_2fnshead_5fmeta_2eproto
